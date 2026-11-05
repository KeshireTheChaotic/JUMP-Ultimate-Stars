
/* JUS-CLASS jus_Class_02095c74::vfunc_50 [class-virtual] slot 50 of vtable 02095c74 (own slot, not
   inherited) */

void jus_Class_02095c74::vfunc_50(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  if (*param_3 < *param_4) {
    piVar1 = param_3;
  }
  else {
    piVar1 = param_4;
  }
  *param_2 = *piVar1;
  piVar1 = param_3;
  if (param_4[1] <= param_3[1]) {
    piVar1 = param_4;
  }
  param_2[1] = piVar1[1];
  if (param_4[2] <= param_3[2]) {
    param_3 = param_4;
  }
  param_2[2] = param_3[2];
  return;
}

