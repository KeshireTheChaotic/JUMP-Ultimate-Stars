
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02158004(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = thunk_FUN_0201a228(0xbc,s_ALWidget_inl_0215e550,s_Create_0215e400,0x212);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)func_0x021af358(iVar1,FUN_021581a4,0);
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  piVar4 = (int *)piVar2[6];
  iVar1 = piVar4[1];
  *(undefined4 *)(iVar1 + 0x94) = 0x10;
  *(undefined4 *)(iVar1 + 0x98) = 0x10;
  *(undefined4 *)(piVar4[1] + 0x9c) = 10;
  iVar1 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0215dbec,s_Create_0215e3f0,0x1de);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)func_0x021af26c(iVar1,FUN_021584dc,FUN_02158594,0);
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  piVar2 = (int *)piVar2[6];
  FUN_0215817c(piVar2,0x31305053);
  uVar3 = FUN_02157f9c();
  iVar1 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,0x31,0xe,5,0x80);
  *(int *)(param_1 + 200) = iVar1;
  if (iVar1 != 0) {
    FUN_02157fe4(iVar1,0x8df,0x1e);
  }
  func_0x021b3b7c(1,0,piVar2,piVar4);
  _DAT_021d5154 = 1;
  (**(code **)(*piVar4 + 8))();
  (**(code **)(*piVar2 + 8))();
  return;
}

