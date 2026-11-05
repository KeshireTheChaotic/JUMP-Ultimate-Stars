
/* JUS-CLASS ALDrawLinkImp_0209be5c::ALDrawLinkImp_0209be5c [class-source-file] stores vtable
   0209be5c into *this (constructor) */

int * ALDrawLinkImp_0209be5c::ALDrawLinkImp_0209be5c(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  jus_Class_0209c0b4::jus_Class_0209c0b4();
  *param_1 = (int)&vftable;
  for (uVar3 = 1; uVar2 = (**(code **)(*param_2 + 0xac))(), uVar3 < uVar2; uVar3 = uVar3 + 1) {
    iVar1 = (**(code **)(*param_1 + 0xc0))(param_1,uVar3);
    (**(code **)(**(int **)(iVar1 + 100) + 0x28))(*(int **)(iVar1 + 100),1);
  }
  return param_1;
}

