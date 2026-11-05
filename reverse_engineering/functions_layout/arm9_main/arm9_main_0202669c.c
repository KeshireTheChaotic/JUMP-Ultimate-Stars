
/* JUS-CLASS jus_Class_0209674c::vfunc_26 [class-virtual] slot 26 of vtable 0209674c (own slot, not
   inherited) */

void jus_Class_0209674c::vfunc_26(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_18;
  undefined1 local_14;
  undefined4 local_10;
  
  if (param_3 == 0) {
    iVar1 = param_1 + param_2 * 0xc;
    if (*(int *)(iVar1 + 0x10) == 1) {
      FUN_02026180(param_1 + 0xc + param_2 * 0xc);
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(1 << (param_2 & 0xff));
    }
    else {
      **(undefined4 **)(iVar1 + 0xc) = 0;
    }
  }
  else {
    iVar1 = param_1 + param_2 * 0xc;
    if (*(int *)(iVar1 + 0x10) == 0) {
      local_14 = 0;
      local_10 = 0;
      local_18 = param_3;
      FUN_020261a8(param_1 + 0xc + param_2 * 0xc,&local_18);
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1 << (param_2 & 0xff);
    }
    else {
      piVar2 = *(int **)(iVar1 + 0xc);
      *(undefined1 *)(piVar2 + 1) = 0;
      *piVar2 = param_3;
    }
  }
  return;
}

