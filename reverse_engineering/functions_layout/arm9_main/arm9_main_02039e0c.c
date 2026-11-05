
/* JUS-CLASS jus_TagNCG2::jus_TagNCG2 [class-type-tag] stores vtable 020969dc into *this
   (constructor) */

int * jus_TagNCG2::jus_TagNCG2(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x100;
  ::jus_Class_02096f04::jus_Class_02096f04();
  *param_1 = (int)&vftable;
  if (param_4 == 0) {
    (**(code **)(*param_1 + 0x10))
              (param_1,(short)param_1[2],*(undefined2 *)((int)param_1 + 10),
               *(code **)(*param_1 + 0x10),uVar1);
  }
  return param_1;
}

