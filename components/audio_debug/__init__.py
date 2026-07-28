import esphome.codegen as cg
import esphome.config_validation as cv

from esphome.const import CONF_ID
from esphome.components import microphone

CODEOWNERS = ["@KillBill2023"]

AUTO_LOAD = []

CONF_MICROPHONE = "microphone"

audio_debug_ns = cg.esphome_ns.namespace("audio_debug")

AudioDebug = audio_debug_ns.class_("AudioDebug", cg.Component)

CONFIG_SCHEMA = (
    cv.Schema(
        {
            cv.GenerateID(): cv.declare_id(AudioDebug),

            cv.Required(CONF_MICROPHONE): cv.use_id(
                microphone.Microphone
            ),
        }
    )
    .extend(cv.COMPONENT_SCHEMA)
)


async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])

    await cg.register_component(var, config)

    mic = await cg.get_variable(config[CONF_MICROPHONE])

    cg.add(var.set_microphone(mic))