
/* JUS-CLASS jus_Class_0209abc8::jus_Class_0209abc8 [class-default] stores vtable 0209abc8 into
   *this (constructor) */

undefined4 * jus_Class_0209abc8::jus_Class_0209abc8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [4];
  undefined4 local_10;
  
  jus_Class_020971b4::jus_Class_020971b4();
  *param_1 = &vftable;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  jus_Class_02093eb4::jus_Class_02093eb4(param_1 + 299);
  param_1[0x22f] = 1;
  param_1[0x230] = 0;
  param_1[0x231] = param_2;
  *(undefined2 *)(param_1 + 0x232) = 0x40;
  *(undefined2 *)((int)param_1 + 0x8ca) = 0x20;
  param_1[0x233] = 6;
  param_1[0x234] = 6;
  param_1[0x237] = 4;
  param_1[0x238] = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  param_1[0x244] = 0;
  param_1[0x245] = 0;
  param_1[0x246] = 0;
  param_1[0x247] = 0;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24b] = 0;
  param_1[0x250] = 2;
  param_1[0x254] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x255) = 1;
  *(undefined1 *)((int)param_1 + 0x955) = 0;
  *(undefined1 *)((int)param_1 + 0x956) = 0;
  *(undefined1 *)((int)param_1 + 0x957) = 0;
  *(undefined1 *)(param_1 + 0x256) = 0;
  param_1[599] = 0;
  param_1[0x259] = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  param_1[0x25c] = 0;
  *(undefined1 *)(param_1 + 0x25d) = 0;
  *(undefined1 *)(param_1 + 0x263) = 1;
  jus_Class_02094220::jus_Class_02094220(param_1 + 0x264);
  jus_Class_020957b0::jus_Class_020957b0(param_1 + 0x267);
  jus_Class_020942e4::jus_Class_020942e4(param_1 + 0x277);
  param_1[0x235] = 1 << (param_1[0x233] & 0xff);
  param_1[0x236] = 1 << (param_1[0x234] & 0xff);
  FUN_0203d1b0(param_1);
  local_10 = 0xfe000;
  (**(code **)(param_1[0x267] + 0x10))(param_1 + 0x267,&local_10);
  FUN_0201512c(param_1 + 0x267,param_1);
  param_1[0x27b] = param_1 + 0x267;
  FUN_02011990(auStack_14);
  (**(code **)(param_1[0x277] + 0x10))(param_1 + 0x277,auStack_14);
  FUN_0201dc68(auStack_1c,0xffff8000,0xffff8000,0x7fff,0x7fff);
  FUN_0203c360(param_1 + 0x27d,auStack_1c);
  FUN_0201cca0(param_1 + 299,param_1 + 0x277);
  iVar1 = FUN_0201a228(8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02093d04::jus_Class_02093d04(iVar1,param_1);
  }
  param_1[0x22] = uVar2;
  param_1[0x287] = 0;
  param_1[0x288] = 0;
  return param_1;
}

