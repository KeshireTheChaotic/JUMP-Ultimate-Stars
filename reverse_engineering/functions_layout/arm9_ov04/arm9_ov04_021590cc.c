
void FUN_021590cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_02151d90(param_1,0x31305053,param_3,param_4,param_4);
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x128))();
  piVar3 = *(int **)(iVar1 + 4);
  if ((uVar2 & 3) == 3) {
    (**(code **)(*piVar3 + 0xd8))(piVar3,1);
    return;
  }
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  return;
}

