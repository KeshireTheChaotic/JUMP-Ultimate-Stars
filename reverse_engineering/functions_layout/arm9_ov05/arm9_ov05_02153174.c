
void FUN_02153174(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 local_10;
  
  cVar1 = *(char *)(param_1 + 0x439);
  piVar2 = *(int **)(*(int *)(param_1 + cVar1 * 4 + 0x188) + 4);
  local_10 = param_4;
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  (**(code **)(&DAT_0216d55c + cVar1 * 0x14))(param_1);
  FUN_02073f24(0x11,0,0x1e);
  func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0xcc) + 4));
  local_10 = 0x100000;
  FUN_02150a10(*(undefined4 *)(param_1 + 0xcc),&local_10);
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0xcc) + 4),FUN_02153270);
  FUN_0215ee44(param_1 + 0x3dc);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x90) + 4),1);
  FUN_0207342c(0x78,5);
  return;
}

