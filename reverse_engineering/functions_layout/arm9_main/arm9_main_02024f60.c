
/* JUS-CLASS jus_Class_02098af8::vfunc_34 [class-virtual] slot 34 of vtable 02098af8 (own slot, not
   inherited) */

undefined4
jus_Class_02098af8::vfunc_34
          (undefined4 param_1,undefined4 *param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  
                    /* JUS-TAG strings=["NULL"] */
  iVar2 = FUN_02004c2c(param_3,&DAT_0209d970,param_3,param_4,param_4);
  if (iVar2 == 0) {
    *param_2 = 0;
  }
  else {
    cVar1 = *param_3;
    bVar4 = cVar1 == 'I';
    if (bVar4) {
      cVar1 = param_3[1];
    }
    bVar5 = bVar4 && cVar1 == 'D';
    if (bVar4 && cVar1 == 'D') {
      bVar5 = param_3[2] == '=';
    }
    if (!bVar5) {
      FUN_02035c90(param_3 + 5);
      uVar3 = FUN_020193f8();
      *param_2 = uVar3;
      return 0;
    }
    FUN_02005f14(param_3 + 3);
    FUN_02035e88();
    uVar3 = FUN_020193f8();
    *param_2 = uVar3;
  }
  return 0;
}

