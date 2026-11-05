
void FUN_02071190(int param_1,short param_2)

{
  param_1 = param_1 * 0x20;
  if (*(ushort *)(param_1 + 0x20b056c) < 9999) {
    *(ushort *)(param_1 + 0x20b056c) = *(ushort *)(param_1 + 0x20b056c) + param_2;
    if (9999 < *(ushort *)(param_1 + 0x20b056c)) {
      *(undefined2 *)(param_1 + 0x20b056c) = 9999;
    }
    FUN_02073114(param_1 + 0x2b4,2);
  }
  return;
}

