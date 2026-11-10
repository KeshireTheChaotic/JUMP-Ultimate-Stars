
/* JUS-CLASS jus_Prop_Color::vfunc_34 [class-virtual] slot 34 of vtable 02098858 (own slot, not
   inherited) */

undefined4 jus_Prop_Color::vfunc_34(undefined4 param_1,undefined4 *param_2,char *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_38;
  char local_34 [16];
  
  uVar3 = 0;
  local_34[0xf] = 0;
  do {
    for (uVar2 = 0; uVar2 < 0xf; uVar2 = uVar2 + 1) {
      local_34[uVar2] = *param_3;
      if (*param_3 == ',' || *param_3 == '\0') {
        local_34[uVar2] = '\0';
        param_3 = param_3 + 1;
        break;
      }
      param_3 = param_3 + 1;
    }
    FUN_020383ec(&local_38,local_34);
    uVar1 = FUN_0200c954(local_38);
    uVar1 = FUN_0200c5ac(uVar1,0x45800000);
    uVar3 = uVar3 + 1;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
    if (3 < uVar3) {
      return 0;
    }
  } while( true );
}

