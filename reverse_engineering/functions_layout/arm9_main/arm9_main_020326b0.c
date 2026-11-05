
ushort FUN_020326b0(char *param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    uVar1 = uVar1 ^ ((short)*param_1 | uVar1 << 1);
  }
  return uVar1;
}

