
void FUN_0215f470(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (uint)DAT_0216e7b0;
  iVar4 = (uVar1 - 4) * 4;
  uVar2 = FUN_02165d64(*(undefined4 *)(DAT_0216e7b4 + iVar4 + 0x10),0);
  FUN_02166014(0,0x32,uVar2);
  iVar3 = uVar1 - 1;
  FUN_02165bc4(*(undefined4 *)(DAT_0216e7b4 + iVar4 + 0x10),0xffffffff,(&DAT_0216abcc)[iVar3 * 2],
               (&DAT_0216abce)[iVar3 * 2]);
  FUN_02165b80(*(undefined4 *)(DAT_0216e7b4 + iVar4 + 0x10),0xffffffff,3);
  return;
}

