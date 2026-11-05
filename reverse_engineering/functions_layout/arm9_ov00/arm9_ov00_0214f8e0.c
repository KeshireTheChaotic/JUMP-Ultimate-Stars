
void FUN_0214f8e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    uStack_c = param_4;
    if ((*(int *)(param_1 + 0xc) != 0) &&
       (iVar1 = FUN_0214fa08(*(int *)(param_1 + 0xc),0), iVar1 != 0)) {
      local_10 = 0;
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68);
      (**(code **)(*piVar2 + 0xb8))(piVar2,&local_10);
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0x6c))();
    }
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = FUN_0214fa08(*(int *)(param_1 + 0x10),0), iVar1 != 0)) {
      local_14 = 0;
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0x68);
      (**(code **)(*piVar2 + 0xb8))(piVar2,&local_14);
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0x68) + 0x6c))();
    }
    if ((*(int *)(param_1 + 0x14) != 0) &&
       (iVar1 = FUN_0214fa08(*(int *)(param_1 + 0x14),0), iVar1 != 0)) {
      local_18 = 0;
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x14) + 4) + 0x68);
      (**(code **)(*piVar2 + 0xb8))(piVar2,&local_18);
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x14) + 4) + 0x68) + 0x6c))();
    }
  }
  return;
}

