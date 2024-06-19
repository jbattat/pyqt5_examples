from PyQt5.QtWidgets import QDialog
from PyQt5.QtCore import pyqtSignal
from typing import Dict

from ui.mainwindow_ui import Ui_Dialog

class MyDialog(QDialog, Ui_Dialog):
    input_data_collected = pyqtSignal(dict)

    def on_start_clicked(self) -> None:
        data_dict: Dict[str, str] = {
            'inputEdit1': self.lineEdit1.text(),
            # ... Add more input fields as needed ...
        }
        self.input_data_collected.emit(data_dict)
