
void FUN_02159cc4(int param_1)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 0xc)) {
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      (**(code **)(param_1 + 8))();
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
    *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_1 + 0x16);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_1 + 0x19);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  (**(code **)(param_1 + 4))(param_1);
  return;
}

