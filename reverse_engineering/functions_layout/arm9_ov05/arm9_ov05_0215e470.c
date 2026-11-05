
int FUN_0215e470(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = FUN_02020d90();
  piVar2 = *(int **)(iVar1 + 4);
  if (param_3 == 0) {
    (**(code **)(*piVar2 + 0xd4))(piVar2,0);
  }
  else {
    (**(code **)(*piVar2 + 0xd4))(piVar2,*(undefined4 *)(param_3 + 4));
  }
  local_20 = param_2 << 0xc;
  local_1c = param_1 << 0xc;
  FUN_0214ce68(iVar1,&local_1c,&local_20);
  return iVar1;
}

