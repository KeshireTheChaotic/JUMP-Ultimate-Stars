
/* JUS-CLASS jus_TagCNTR::jus_TagCNTR [class-type-tag] stores vtable 02095560 into *this
   (constructor) */

int * jus_TagCNTR::jus_TagCNTR
                (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  jus_TagNRML::jus_TagNRML();
  *param_1 = (int)&vftable;
  *(undefined1 *)(param_1 + 5) = 0;
  if (param_5 == '\0') {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x54))(param_1,param_2,param_4);
  }
  return param_1;
}

