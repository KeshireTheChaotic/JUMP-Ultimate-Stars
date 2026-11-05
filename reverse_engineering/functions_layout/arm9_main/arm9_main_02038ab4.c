
/* JUS-CLASS jus_Class_02095c74::vfunc_38 [class-virtual] slot 38 of vtable 02095c74 (own slot, not
   inherited) */

void jus_Class_02095c74::vfunc_38(int *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_4;
  (**(code **)(*DAT_020a1018 + 0x20))(param_1,DAT_020a1018,param_4);
  if (*param_1 != 0) {
    FUN_0202537c(&local_18,param_4,param_1);
    *param_3 = local_18;
    FUN_0202537c(&local_1c,param_4 + 4,param_1);
    param_3[1] = local_1c;
    FUN_0202537c(&local_20,param_4 + 8,param_1);
    param_3[2] = local_20;
  }
  return;
}

