
/* JUS-CLASS jus_Class_0209674c::vfunc_23 [class-virtual] slot 23 of vtable 0209674c (own slot, not
   inherited) */

void jus_Class_0209674c::vfunc_23(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  
  iVar1 = param_2 * 0xc;
  if (*(int *)(param_1 + iVar1 + 0x10) == 0) {
    local_24 = 0;
    local_20 = 1;
    local_1c = 0;
    FUN_020261a8(param_1 + 0xc + iVar1,&local_24);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1 << (param_2 & 0xff);
  }
  local_2c = 1;
  local_30 = param_3;
  local_28 = param_4;
  FUN_020261a8(param_1 + 0xc + iVar1,&local_30);
  return;
}

