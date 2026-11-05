
void FUN_021cb4a4(int *param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  
                    /* JUS-TAG source_file_inferred="ALFont.cpp" */
  uVar1 = (**(code **)(*param_1 + 0x18))();
  puVar2 = (undefined2 *)FUN_02036398(uVar1,param_3,0);
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  param_2[3] = puVar2[3];
  return;
}

