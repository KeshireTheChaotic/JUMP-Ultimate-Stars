
void FUN_02069a2c(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_3c [21];
  undefined1 auStack_27 [23];
  
                    /* JUS-TAG strings=["%s%c%c%c%c%s"] */
  uVar2 = FUN_02069cac();
  FUN_02069a8c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x2b,auStack_3c);
  uVar1 = FUN_02069ca8(param_1);
  FUN_02069a8c(uVar1,0,0x20,auStack_27);
  FUN_02052c44(param_3,0x15,s__s_c_c_c_c_s_0209dddc,auStack_3c,param_2 >> 0x18,
               param_2 >> 0x10 & 0xff,param_2 >> 8 & 0xff,param_2 & 0xff,auStack_27);
  return;
}

