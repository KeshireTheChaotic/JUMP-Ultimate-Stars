
void FUN_0215d660(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_020507a8(DAT_0216e790,0x1d);
  FUN_021663fc(*(undefined4 *)(DAT_0216e794 + 0x14),0);
  iVar2 = 0;
  iVar3 = iVar1;
  do {
    FUN_0215d550(iVar3,iVar2);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 5);
  FUN_021611e4(*(int *)(DAT_0216e794 + 8) + (uint)*(ushort *)(&DAT_0216aafc + iVar1 * 2) * 2,0,0x1e,
               0x13);
  iVar3 = 0;
  do {
    FUN_0215d468(iVar1,iVar3);
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar3 < 5);
  FUN_0216121c();
  FUN_02166370(*(undefined4 *)(DAT_0216e794 + 0x14));
  FUN_0215d0b0();
  return;
}

