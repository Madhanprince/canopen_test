from canopen
import canopen


class ItalseaDualDrive:
    def __init__(self, node_id,):
        self.node_id = node_id
        self.dual_drive=canopen.BaseNode402(node_id, 'motor_control/italsea_dual_drive.eds')
        
