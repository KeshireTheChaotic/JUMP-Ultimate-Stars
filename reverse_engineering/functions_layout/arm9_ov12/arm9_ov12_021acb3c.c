
/* JUS-CLASS jus_Class_021d149c::jus_Class_021d149c [class-default] stores vtable 021d149c into
   *this (constructor) */

int * jus_Class_021d149c::jus_Class_021d149c
                (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  jus_Class_021d1124::jus_Class_021d1124();
  *param_1 = (int)&vftable;
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined1 *)((int)param_1 + 0x165) = 1;
  *(undefined1 *)((int)param_1 + 0x166) = 0;
  param_1[0x5a] = DAT_021d28e8;
  param_1[0x5b] = DAT_021d28ec;
  FUN_021aca28(param_1 + 0x5c);
  param_1[0x5e] = 0;
  iVar1 = FUN_021aca38();
  param_1[0x57] = iVar1;
  FUN_021c5fb4(0);
  iVar1 = FUN_021acab4();
  param_1[0x58] = *(int *)(iVar1 + 4);
  piVar3 = (int *)param_1[0x58];
  (**(code **)(*param_1 + 0xb4))(param_1,piVar3);
  (**(code **)(*piVar3 + 0xc))();
  (**(code **)(*(int *)param_1[0x58] + 0xd4))((int *)param_1[0x58],param_1);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  iVar1 = FUN_021b67a4(param_1);
  param_1[0x28] = iVar1;
  FUN_02028330(param_1[0x28]);
  (**(code **)(*(int *)param_1[0x28] + 0xd8))((int *)param_1[0x28],1);
  (**(code **)(*(int *)param_1[0x28] + 0x138))((int *)param_1[0x28],param_1);
  (**(code **)(*(int *)param_1[0x28] + 0xd4))((int *)param_1[0x28],param_1);
  uVar2 = FUN_0200c954((int)*(short *)(param_1[0x28] + 0x90));
  FUN_0200c9e4(0x45800000,uVar2);
  local_18 = FUN_0200c8e0();
  FUN_021acadc(param_1[0x58],&local_18);
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  piVar3 = (int *)param_1[0x27];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x184))(piVar3,param_1);
  }
  return param_1;
}

