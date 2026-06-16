import canopen
import time

class ItalseaDriver:

    def __init__(self, node_id=1):

        self.node_id = node_id
        self.network = canopen.Network()
        self.network.connect(channel="vcan0",bustype="socketcan")
        self.remote = canopen.RemoteNode(self.node_id,"ItalseaDualDrive.eds")
        self.network.add_node(self.remote)

        print(f"Connected to Node {self.node_id}")

    def initialize(self):
        print("Initializing driver...")
        # self.remote.nmt.wait_for_bootup()
        # print("Italsea Booted up")
        self.start()

    def start(self):
        print("Sending NMT Start...")
        self.remote.nmt.state = "OPERATIONAL"
        print("Current NMT State:", self.remote.nmt.state)
    
    # def read_sw_and_rated_current(self):
    #     print("sending SDO request to read sw version and rated current")
    #     self.sw_var = self.remote.sdo[0x2201].raw
    #     print(self.sw_var)
    #     self.rated_current = self.remote.sdo[0x6075].raw
    #     print(self.rated_current)

    def rpdo_tpdo(self):
        print("Reading PDO configuration from device...")
        self.rpdo1 = self.remote.rpdo[1]
        self.tpdo1 = self.remote.tpdo[1]
        self.tpdo2 = self.remote.tpdo[2]
        self.tpdo3 = self.remote.tpdo[3]
        self.rpdo1.read()
        self.tpdo1.read()
        self.tpdo2.read()
        self.tpdo3.read()

        self.target_velocity = self.rpdo1.map[0] 
        self.target_velocity_1 = self.rpdo1.map[1]

        self.tpdo1_value = self.tpdo1.map[0]
        self.tpdo1_value_1=self.tpdo1.map[1]
        self.tpdo1_value_2=self.tpdo1.map[2]
        self.tpdo1_value_3=self.tpdo1.map[3]

        self.tpdo2_value = self.tpdo2.map[0]
        self.tpdo2_value_1 = self.tpdo2.map[1]

        self.tpdo3_Value = self.tpdo3.map[0]
        self.tpdo3_Value_1 = self.tpdo3.map[1]

        print(self.tpdo1_value)
        print(self.tpdo1_value_1)
        print(self.tpdo1_value_2)
        print(self.tpdo1_value_3)

        print(self.tpdo2_value)
        print(self.tpdo2_value_1)

        print(self.tpdo3_Value)
        print(self.tpdo3_Value_1)

    # def drive(self):
    #     while True:
    #         try:
    #             self.target_velocity.raw = 1000
    #             self.target_velocity_1.raw = 1000
    #             self.rpdo1.transmit()
    #             time.sleep(0.05)

    #         except Exception as e:
    #             print("ERROR:", e)
    #             break
        
    # def velocity_feedback(self):
    #     while True:
    #         demand = self.tpdo2_value.raw
    #         actual = self.tpdo2_value_1.raw

    #         print(
    #             f"Demand={demand}  "
    #             f"Actual={actual}"
    #         )  

    #         time.sleep(0.1)

    def decode_tpdo_1(self):
        for obj in self.tpdo1.map:
            print(
                obj.name,
                hex(obj.index),
                obj.subindex,
                obj.length
            )

def main():
    driver = ItalseaDriver(node_id=1)
    driver.initialize()
    # driver.read_sw_and_rated_current()
    driver.rpdo_tpdo()
    # driver.drive()
    # driver.velocity_feedback()
    driver.decode_tpdo_1()


if __name__ == "__main__":
    main()