
void FUN_020711cc(int param_1,short param_2)

{
  param_1 = param_1 * 0x20;
  if (*(ushort *)(param_1 + 0x20b056e) < 9999) {
    *(ushort *)(param_1 + 0x20b056e) = *(ushort *)(param_1 + 0x20b056e) + param_2;
    if (9999 < *(ushort *)(param_1 + 0x20b056e)) {
      *(undefined2 *)(param_1 + 0x20b056e) = 9999;
    }
    FUN_02073114(param_1 + 0x2b6,2);
  }
  return;
}

