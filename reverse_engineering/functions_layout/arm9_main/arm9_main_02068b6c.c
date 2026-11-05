
undefined4 FUN_02068b6c(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_02054b44();
  *(undefined8 *)(param_1 + 0xcb0) = uVar1;
  *(undefined1 *)(param_1 + 0xd11) = 0;
  uVar1 = FUN_02054b44();
  *(undefined8 *)(param_1 + 0xcb0) = uVar1;
  FUN_02068724(0x21a3630,0x21a3638,(int)*(char *)(param_1 + 0xd11),0x200000);
  return 3;
}

