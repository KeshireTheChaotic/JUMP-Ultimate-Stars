
void FUN_02155b28(undefined4 param_1)

{
  int *piVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0x1000;
  local_c = 0x1000;
  FUN_02155ab0(param_1,&local_c,&local_10);
  piVar1 = (int *)FUN_02155b08(param_1,0x54435049,0);
  (**(code **)(*piVar1 + 0x38))();
  return;
}

