
/* JUS-CLASS jus_Class_0209be5c::jus_Class_0209be5c [class-default] stores vtable 0209be5c into
   *this (constructor) */

int * jus_Class_0209be5c::jus_Class_0209be5c(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4();
  *param_1 = iRam0201540c;
  for (uVar3 = 1; uVar2 = (**(code **)(*param_2 + 0xac))(), uVar3 < uVar2; uVar3 = uVar3 + 1) {
    iVar1 = (**(code **)(*param_1 + 0xc0))(param_1,uVar3);
    (**(code **)(**(int **)(iVar1 + 100) + 0x28))(*(int **)(iVar1 + 100),1);
  }
  return param_1;
}

