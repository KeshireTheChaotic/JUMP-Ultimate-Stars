
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02156270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216bd74,s_Create_0216c294,0x1de,param_4);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)func_0x021af26c(iVar1,0x2155979,0x21559e5,0);
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  piVar2 = (int *)piVar2[6];
  FUN_02155a9c(piVar2,0x31305053);
  uVar3 = FUN_02155920();
  uVar3 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,0x31,0xf,5,0x80);
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_02155968(*(int *)(param_1 + 0x80),0x8df,0x1e);
  }
  iVar1 = jus_AllocDebug(0xbc,s_ALWidget_inl_0216bd64,s_Create_0216c29c,0x212);
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    piVar4 = (int *)func_0x021af358(iVar1,&LAB_02156364_1,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  piVar4 = (int *)piVar4[6];
  iVar1 = piVar4[1];
  *(undefined4 *)(iVar1 + 0x94) = 0x10;
  *(undefined4 *)(iVar1 + 0x98) = 0x10;
  *(undefined4 *)(piVar4[1] + 0x9c) = 10;
  func_0x021b3b7c(1,0,piVar2,piVar4);
  _DAT_021d5154 = 1;
  (**(code **)(*piVar2 + 8))();
  (**(code **)(*piVar4 + 8))();
  return;
}

