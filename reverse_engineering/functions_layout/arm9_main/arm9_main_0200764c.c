
ushort * FUN_0200764c(ushort *param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  while( true ) {
    if (uVar1 == 0) break;
    if (uVar1 == param_2) {
      return param_1;
    }
    uVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (param_2 == 0) {
    return param_1;
  }
  return (ushort *)0x0;
}

