
undefined4 FUN_02089dec(undefined4 param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_02089ef4;
  if (*(int *)(PTR_DAT_02089ef4 + 100) == 3) {
    *(undefined4 *)(PTR_DAT_02089ef4 + 100) = 4;
    puVar3 = PTR_DAT_02089ef8;
    while (*(int *)(puVar2 + 100) != 2) {
      if (*(int *)(puVar2 + 100) != 4) {
        bVar1 = false;
        goto LAB_02089e44;
      }
      (**(code **)puVar3)();
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
LAB_02089e44:
  if (!bVar1) {
    return 0;
  }
  FUN_020517fc(PTR_DAT_02089efc,0,0x18);
  if (param_2 != 0) {
    FUN_02051890(param_2,PTR_DAT_02089efc,param_3);
  }
  FUN_02058b94(0xe,PTR_port_receive_func_1_02089f00,0);
  iVar4 = FUN_02089db8(param_1);
  puVar3 = PTR_DAT_02089ef8;
  puVar2 = PTR_DAT_02089ef4;
  if (iVar4 == 0) {
    return 0;
  }
  while( true ) {
    iVar4 = *(int *)(puVar2 + 100);
    if (iVar4 == 6) {
      return 1;
    }
    if (iVar4 == 9) {
      return 0;
    }
    if (iVar4 == 8) {
      return 0;
    }
    if (iVar4 == 2) break;
    if (iVar4 == 10) {
      return 0;
    }
    (**(code **)puVar3)();
  }
  return 0;
}

