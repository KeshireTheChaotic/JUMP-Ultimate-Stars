
/* JUS-GAME Secret::Secret_Create [source-string] __FILE__="Secret.cpp" __FUNCTION__="Secret_Create"
   lines=[25] passed to 1 source-location call(s) */

int * Secret::Secret_Create(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  
                    /* JUS-TAG strings=["Secret.cpp","Secret_Create","bin/secret.bin"] */
  piVar1 = (int *)jus_AllocDebug(8,s_Secret_cpp_0209f4d0,s_Secret_Create_0209f4c0,0x19,in_r3);
  FUN_020517fc(piVar1,0,8);
  piVar2 = (int *)FUN_02033410(s_bin_secret_bin_0209f4dc,0,0);
  if (piVar2[7] == 0) {
    (**(code **)(*piVar2 + 0x10))();
  }
  iVar3 = piVar2[7];
  *piVar1 = iVar3;
  piVar2 = *(int **)(iVar3 + 4);
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,0);
  piVar1[1] = iVar3;
  return piVar1;
}

