
void FUN_0215019c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216f484,s_Create_0216f43c,0x1de);
  if (iVar1 != 0) {
    func_0x021af26c(iVar1,FUN_02150524,FUN_02150724,0);
  }
  piVar2 = (int *)FUN_021504ac();
  iVar1 = jus_AllocDebug(0xbc,s_ALWidget_inl_0216f464,s_Create_0216f41c,0x212);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    piVar3 = (int *)func_0x021af358(iVar1,FUN_02150798,0);
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  iVar4 = piVar3[6];
  iVar1 = *(int *)(iVar4 + 4);
  *(undefined4 *)(iVar1 + 0x94) = 0x10;
  *(undefined4 *)(iVar1 + 0x98) = 0x10;
  *(undefined4 *)(*(int *)(iVar4 + 4) + 0x9c) = 0xf;
  func_0x021b3b7c(1,0,piVar2);
  iVar1 = FUN_021504d4(piVar2,0x31305053);
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 100);
  piVar3 = *(int **)(iVar1 + 0x2c);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_02036430(*(undefined4 *)(iVar1 + 0x20));
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x10))();
  }
  iVar1 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar3[6],0x21,0xc,5,0x80);
  *(int *)(param_1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0x18) = 0x870;
  *(undefined2 *)(iVar1 + 0x16) = 0x8df;
  *(undefined1 *)(iVar1 + 0x1a) = 0x20;
  *(undefined1 *)(iVar1 + 0x1c) = 3;
  *(undefined1 *)(iVar1 + 0x1b) = 1;
  FUN_02028330(*(undefined4 *)(**(int **)(param_1 + 8) + 4));
  (**(code **)(*piVar2 + 8))();
  iVar1 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216f484,s_Create_0216f43c,0x1de);
  if (iVar1 != 0) {
    func_0x021af26c(iVar1,FUN_02150570,FUN_02150724,0);
  }
  piVar3 = (int *)FUN_021504ac();
  func_0x021b3b7c(2,0,piVar3,0);
  (**(code **)(*piVar3 + 8))();
  iVar1 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216f484,s_Create_0216f43c,0x1de);
  if (iVar1 != 0) {
    func_0x021af26c(iVar1,FUN_021505ac,FUN_02150724,0);
  }
  piVar3 = (int *)FUN_021504ac();
  func_0x021b3b7c(3,0,piVar3,0);
  (**(code **)(*piVar3 + 8))();
  iVar1 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216f484,s_Create_0216f43c,0x1de);
  if (iVar1 != 0) {
    func_0x021af26c(iVar1,FUN_021505e8,FUN_02150724,0);
  }
  piVar3 = (int *)FUN_021504ac();
  func_0x021b3b7c(4,0,piVar3,0);
  (**(code **)(*piVar3 + 8))();
  iVar1 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216f484,s_Create_0216f43c,0x1de);
  if (iVar1 != 0) {
    func_0x021af26c(iVar1,FUN_02150624,FUN_02150724,0);
  }
  piVar3 = (int *)FUN_021504ac();
  func_0x021b3b7c(5,0,piVar3,0);
  (**(code **)(*piVar3 + 8))();
  *(undefined1 *)(param_1 + 0x543) = 0x30;
  return;
}

