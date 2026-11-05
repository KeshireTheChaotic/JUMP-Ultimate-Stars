
/* JUS-CLASS jus_Class_020979e8::vfunc_34 [class-virtual] slot 34 of vtable 020979e8 (own slot, not
   inherited) */

undefined4 jus_Class_020979e8::vfunc_34(undefined4 param_1,undefined2 *param_2,char *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  char local_30 [16];
  
  uVar3 = 0;
  local_30[0xf] = 0;
  do {
    for (uVar2 = 0; uVar2 < 0xf; uVar2 = uVar2 + 1) {
      local_30[uVar2] = *param_3;
      if (*param_3 == ',' || *param_3 == '\0') {
        local_30[uVar2] = '\0';
        param_3 = param_3 + 1;
        break;
      }
      param_3 = param_3 + 1;
    }
    uVar1 = FUN_0203837c(local_30,0);
    uVar3 = uVar3 + 1;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
    if (3 < uVar3) {
      return 0;
    }
  } while( true );
}

