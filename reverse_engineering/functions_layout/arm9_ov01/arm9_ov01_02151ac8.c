
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02151ac8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216bd74,s_Create_0216bd1c,0x1de);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)func_0x021af26c(iVar1,0x2151bf9,&LAB_02151c68_1,0);
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  piVar2 = (int *)piVar2[6];
  iVar1 = (**(code **)(*(int *)piVar2[1] + 0xb0))((int *)piVar2[1],0x31305053);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0214d37c();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 100);
  piVar4 = *(int **)(iVar1 + 0x2c);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_02036430(*(undefined4 *)(iVar1 + 0x20));
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x10))();
  }
  uVar3 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar4[6],0x11,3,5,0x80);
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  iVar1 = *(int *)(param_1 + 0x13c);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0x18) = 0;
    *(undefined2 *)(iVar1 + 0x16) = 0x8df;
    *(undefined1 *)(iVar1 + 0x1a) = 0x1e;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x1b) = 1;
  }
  iVar1 = jus_AllocDebug(0xbc,s_ALWidget_inl_0216bd64,s_Create_0216bd2c,0x212);
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    piVar4 = (int *)func_0x021af358(iVar1,0x2151c91,0);
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

