import telebot as abdul

bot = abdul.TeleBot('hshsdjhsdjsdjdiwr7yyhefnuhu3hu3rbj')

@abdul.message_handler(commands=['start'])

def start(message):
   abdul.send_message(message.chat.id, 'hello am halima how can i help you')
   
bot.polling()