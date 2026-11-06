
undefined4 FUN_0214dbac(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0) {
    return 0xffffffff;
  }
  uVar1 = (*(code *)((int)&switchD_0214dbbc::switchdataD_0214dbbe +
                    (int)(short)(&switchD_0214dbbc::switchdataD_0214dbbe)[param_2]))();
  return uVar1;
}

