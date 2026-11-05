
/* JUS-CLASS ALObjectImp_020990e0::~ALObjectImp_020990e0 [class-source-file] slot 0/1 of vtable
   020990e0; resets vtables (destructor) */

int * ALObjectImp_020990e0::~ALObjectImp_020990e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = (int)&vftable;
  DAT_020a0ed8 = DAT_020a0ed8 + -1;
  (**(code **)(*param_1 + 0x5c))();
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 8))();
  }
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)&DAT_020a11b8 && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  iVar3 = param_1[0xe];
  if (iVar3 != 0) {
    FUN_0201b484(iVar3);
    iVar2 = FUN_0201a9ec(iVar3);
    if (iVar2 == 0) {
      FUN_0201a958(iVar3,1);
    }
  }
  FUN_02037c24(param_1[0xd] + 0x23c,param_1 + 8);
  ALCollision_02094f78::ALCollision_02094f78(param_1);
  return param_1;
}

