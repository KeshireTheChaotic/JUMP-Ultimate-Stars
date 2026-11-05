
uint * FUN_037fd598(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = param_1;
  puVar3 = (uint *)0x0;
  while ((puVar2 = puVar1, puVar2 != (uint *)0x0 && (puVar2 < param_2))) {
    puVar3 = puVar2;
    puVar1 = (uint *)puVar2[1];
  }
  param_2[1] = (uint)puVar2;
  *param_2 = (uint)puVar3;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = (uint)param_2;
    if ((uint *)((int)param_2 + param_2[2]) == puVar2) {
      param_2[2] = param_2[2] + puVar2[2];
      puVar2 = (uint *)puVar2[1];
      param_2[1] = (uint)puVar2;
      if (puVar2 != (uint *)0x0) {
        *puVar2 = (uint)param_2;
      }
    }
  }
  if (puVar3 == (uint *)0x0) {
    param_1 = param_2;
  }
  else {
    puVar3[1] = (uint)param_2;
    if ((uint *)((int)puVar3 + puVar3[2]) == param_2) {
      puVar3[2] = puVar3[2] + param_2[2];
      puVar3[1] = (uint)puVar2;
      if (puVar2 != (uint *)0x0) {
        *puVar2 = (uint)puVar3;
      }
    }
  }
  return param_1;
}

