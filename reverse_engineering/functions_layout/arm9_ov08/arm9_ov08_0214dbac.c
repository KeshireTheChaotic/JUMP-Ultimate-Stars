
undefined4 FUN_0214dbac(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0214dbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)((int)&switchD_0214dbbc::switchdataD_0214dbbe +
                    (int)(short)(&switchD_0214dbbc::switchdataD_0214dbbe)[param_2]))();
  return uVar1;
}

