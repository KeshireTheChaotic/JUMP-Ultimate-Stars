
undefined4 FUN_02182224(int *param_1)

{
  undefined4 uVar1;
  code *in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 2;
  }
  if (in_stack_00000010 == (code *)0x0) {
    FUN_0218912c(param_1,s_No_callback__021a4dcc);
    return 2;
  }
  if (*(int *)(*param_1 + 0x108) == 0) {
    uVar1 = FUN_02188c88();
    return uVar1;
  }
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0x601;
  (*in_stack_00000010)(param_1,&local_24,in_stack_00000014);
  return 0;
}

