
/* JUS-CLASS jus_TagNRML::jus_TagNRML [class-type-tag] stores vtable 02094c84 into *this
   (constructor) */

int * jus_TagNRML::jus_TagNRML(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  *param_1 = (int)&jus_Class_02094b9c::vftable;
  param_1[1] = param_2;
  *param_1 = (int)&vftable;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_4 == 0) {
    (**(code **)(*param_1 + 0x40))();
  }
  else {
    (**(code **)(*param_1 + 0x44))();
  }
  return param_1;
}

