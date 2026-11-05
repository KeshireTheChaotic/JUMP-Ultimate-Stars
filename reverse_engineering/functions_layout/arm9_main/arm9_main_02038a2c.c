
/* JUS-CLASS jus_Class_02095c74::vfunc_37 [class-virtual] slot 37 of vtable 02095c74 (own slot, not
   inherited) */

void jus_Class_02095c74::vfunc_37
               (undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  (**(code **)(*DAT_020a1018 + 0x20))(&local_14);
  if (local_14 != 0) {
    FUN_0202537c(&local_18,param_3,&local_14);
    *param_2 = local_18;
    FUN_0202537c(&local_1c,param_3 + 4,&local_14);
    param_2[1] = local_1c;
    FUN_0202537c(&local_20,param_3 + 8,&local_14);
    param_2[2] = local_20;
  }
  return;
}

