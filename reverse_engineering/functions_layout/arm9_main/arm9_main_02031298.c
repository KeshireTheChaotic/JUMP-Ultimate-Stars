
/* JUS-CLASS jus_Class_02094484::~jus_Class_02094484 [class-default] slot 0/1 of vtable 02094484;
   resets vtables (destructor) */

undefined4 * jus_Class_02094484::~jus_Class_02094484(undefined4 *param_1)

{
  int iVar1;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 *puVar2;
  
  *param_1 = &vftable;
  DAT_020a107c = DAT_020a107c + -1;
  if (param_1[0x94] != 0) {
    FUN_020161b0();
    (*(code *)param_1[0x94])();
  }
  FUN_0201cdb4(DAT_020a0d10,param_1);
  puVar2 = extraout_r1;
  if ((int *)param_1[0x97] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x97] + 4))();
    puVar2 = extraout_r1_00;
  }
  if (param_1[0x96] != 0) {
    puVar2 = DAT_020a0d84;
  }
  if (param_1[0x96] != 0 && param_1 != puVar2) {
    FUN_020275ec();
    param_1[0x96] = 0;
  }
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

