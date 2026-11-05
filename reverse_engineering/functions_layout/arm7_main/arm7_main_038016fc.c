
void FUN_038016fc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_03801770();
  if (iVar1 != 0) {
    FUN_03801750(iVar1,param_1);
    uVar2 = (uint)*(byte *)(param_1 + 8 + param_2);
    (&DAT_03809228)[uVar2 * 0x40] = (&DAT_03809228)[uVar2 * 0x40] & 0xfe;
    *(undefined1 *)(param_1 + 8 + param_2) = 0xff;
  }
  return;
}

