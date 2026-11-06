
/* JUS-CLASS jus_TagCNTR::jus_TagCNTR [class-type-tag] stores vtable 02095560 into *this
   (constructor) */

int * jus_TagCNTR::jus_TagCNTR(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  jus_TagCNTR_Part_02094b9c::jus_TagCNTR_Part_02094b9c();
  *param_1 = (int)&vftable;
  if (*(char *)(param_2 + 0x14) == '\0') {
    pcVar1 = *(code **)(*param_1 + 0x50);
    (*pcVar1)(param_1,param_1[1],*(undefined4 *)(param_2 + 0x10),pcVar1,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x54))(param_1,param_1[1],*(undefined4 *)(param_2 + 0x10));
  }
  return param_1;
}

