import canopen 

class ItalseaTask:
    def __init__(self, node_id = 5):
        self.node_id = node_id
        self.network = canopen.Network()
        self.node = self.network.add_node(self.node_id)
        self.network.connect(interface='can0', bustype='socketcan')
        self.remote =canopen.RemoteNode(self.node_id, "canopen_test/ItalseaDualDrive.eds")
        self.network.nmt.state = 'PRE-OPERATIONAL'

    def start(self):
        
        self.network.nmt.state = 'OPERATIONAL'