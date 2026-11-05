
/* JUS-CLASS jus_Class_02098af8::vfunc_57 [class-virtual] slot 57 of vtable 02098af8 (own slot, not
   inherited) */

void jus_Class_02098af8::vfunc_57(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  DAT_020a1068 = DAT_020a1068 + 1 & 7;
  local_18 = *param_3;
  uVar1 = FUN_0202c040(&local_18);
  iVar2 = DAT_020a1068 * 0xc;
  *(undefined4 *)(&DAT_020a2084 + iVar2) = uVar1;
  local_1c = param_3[1];
  uVar1 = FUN_0202c040(&local_1c);
  *(undefined4 *)(&DAT_020a2088 + iVar2) = uVar1;
  local_20 = param_3[2];
  uVar1 = FUN_0202c040(&local_20);
  *(undefined4 *)(&DAT_020a208c + iVar2) = uVar1;
  (**(code **)(*param_1 + 0x24))(param_1,param_2,&DAT_020a2084 + iVar2);
  return;
}

