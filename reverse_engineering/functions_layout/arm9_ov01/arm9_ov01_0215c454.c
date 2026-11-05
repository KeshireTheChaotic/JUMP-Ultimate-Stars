
void FUN_0215c454(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  func_0x021b7170();
  FUN_0207342c(0x78,1);
  FUN_02159ea8(iVar2,0x215b8bd);
  func_0x021b6760(*(undefined4 *)(*(int *)(iVar2 + 0x70) + 4),4,0x215a275);
  FUN_02159e60(iVar2,0x215ba31);
  FUN_02159790(iVar2,0);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0xac) + 4),1);
  piVar1 = *(int **)(*(int *)(iVar2 + 0xac) + 4);
  (**(code **)(*piVar1 + 0x198))(piVar1,(int)*(char *)(iVar2 + 0x312));
  func_0x021b65cc();
  return;
}

