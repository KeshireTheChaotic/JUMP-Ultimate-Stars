
undefined4 FUN_021b27e0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = param_1[7];
  iVar1 = (**(code **)(*param_1 + 0xd0))();
  FUN_021b2730(&local_30,iVar1 + 0x38,&local_1c);
  local_18 = local_30;
  iVar1 = (**(code **)(*param_1 + 0xd0))();
  FUN_021b2890(&local_20,iVar1 + 0x38);
  if (local_18 == local_20) {
    iVar1 = (**(code **)(*param_1 + 0xd0))();
    FUN_021b2898(&local_24,iVar1 + 0x38);
    local_18 = local_24;
    iVar1 = (**(code **)(*param_1 + 0xd0))();
    FUN_021b2890(&local_28,iVar1 + 0x38);
    if (local_18 == local_28) {
      return 0;
    }
  }
  iVar1 = local_18;
  puVar2 = (undefined4 *)**(undefined4 **)(local_18 + 0x10);
  while( true ) {
    FUN_021b2784(&local_2c,*(undefined4 *)(iVar1 + 0x10));
    if (puVar2 == local_2c) {
      return 0;
    }
    if ((*(int *)*puVar2 == param_2) && (((int *)*puVar2)[1] == param_3)) break;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

