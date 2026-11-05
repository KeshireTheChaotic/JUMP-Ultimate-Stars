
void FUN_0215a8d8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 8) + 4),1);
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
  (**(code **)(*piVar1 + 0x148))(piVar1,0x10);
  iVar2 = FUN_0203b414(0);
  local_c = 0x1000;
  piVar1 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar1 + 0x10))(piVar1,&local_c);
  iVar2 = FUN_0203b414(3);
  local_10 = 0;
  piVar1 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar1 + 0x10))(piVar1,&local_10);
  iVar2 = 0;
  while( true ) {
    if (5 < iVar2) {
      return;
    }
    iVar3 = *(int *)(*(int *)(param_1 + iVar2 * 4 + 0xc) + 4);
    if ((*(uint *)(iVar3 + 0x90) & 8) != 8) break;
    iVar2 = iVar2 + 1;
  }
  func_0x021b6214(iVar3,1);
  return;
}

