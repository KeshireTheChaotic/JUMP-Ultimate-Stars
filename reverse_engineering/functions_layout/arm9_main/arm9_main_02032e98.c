
/* JUS-CLASS jus_Class_020998f0::vfunc_09 [class-virtual] slot 9 of vtable 020998f0 (own slot, not
   inherited) */

void jus_Class_020998f0::vfunc_09(undefined4 param_1,int param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = *param_3;
  if (cVar1 != '\0') {
    param_3 = (char *)0x1;
  }
  if (cVar1 == '\0') {
    param_3 = (char *)0x0;
  }
  pcVar2 = *(code **)(**(int **)(param_2 + 100) + 0x60);
  (*pcVar2)(*(int **)(param_2 + 100),param_3,pcVar2,param_4,param_4);
  return;
}

