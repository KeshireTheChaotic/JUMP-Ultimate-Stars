
void FUN_02071b28(int param_1)

{
  if ((*(byte *)(param_1 + 0x20b4084) & 0x40) == 0) {
    *(byte *)(param_1 + 0x20b4084) = *(byte *)(param_1 + 0x20b4084) | 0x40;
    DAT_020b02ac = 1;
    FUN_02073114(param_1 + 0x3dcc);
  }
  return;
}

